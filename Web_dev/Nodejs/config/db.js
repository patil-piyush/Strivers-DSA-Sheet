const mongoose = require('mongoose');

const connectDB = async () => {
    try {
        await mongoose.connect(process.env.MONGOURI);
        console.log('mongoose database connected');
    } catch (error) {
        console.log('error connecting mongoose');
        console.log(error);
    }
};

module.exports = connectDB;