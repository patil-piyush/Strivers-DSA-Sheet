const User = require(`../models/User`);
const jwt = require(`jsonwebtoken`);
const bcrypt = require(`bcrypt`);

const userRegisterController = async (req, res) => {
    try {
        const { name, email, password } = req.body;
        if (!name || !email || !password)
            return res.json(`Info is missing. Enter all the details to register!`);

        const user = await User.findOne({ email });

        if (user)
            return res.json(`User already exists. Use different email.`);

        const hashedPassword = await bcrypt.hash(password, 10);

        const newUser = new User({
            name,
            email,
            password: hashedPassword
        });

        await newUser.save();

        const token = jwt.sign({ name, email }, process.env.SECRET, { expiresIn: '1h' });

        // Assign cookie
        res.cookie('token', token, {
            httpOnly: true, // Prevents client-side JavaScript from accessing the cookie
            secure: process.env.NODE_ENV === 'production', // Ensures cookies are sent over HTTPS in production
            maxAge: 3600000 // 1 hour in milliseconds
        });

        return res.json({ message: 'User registered successfully', token });
    } catch (error) {
        console.error(error);
        return res.status(500).json({ message: 'Internal server error' });
    }
};

const userLoginController = (req, res) => {
    
}

module.exports = {
    userLoginController,
    userRegisterController
}