const express = require(`express`);
const { userLoginController, userRegisterController} = require(`../controllers/authController`)

const router = express.Router();


router.post(`/register`, userRegisterController);
router.post(`/login`, userLoginController);

module.exports = router;