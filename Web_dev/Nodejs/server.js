require('dotenv').config();
const express = require('express');
const connectDB = require('./config/db');
const PORT = 3000;

const app = express();

connectDB();

app.use(express.json());
app.use(express.urlencoded({ extended: false }));

app.get('/', (req, res) => {
    return res.send('server is working fine!!');
});

app.listen(PORT, () => {
    console.log(`server is running on port - ${PORT}`);
});
