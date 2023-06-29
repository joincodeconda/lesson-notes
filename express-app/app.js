import express from "express";

const app = express();
const PORT = 8080;
const ROOTv1 = "/api/v1";

app.use(express.json());

app.get(`${ ROOTv1 }/basic`, (req, res) => {
    res.status(200);
    res.send("Here's some information from the server.");
});

app.get(`${ ROOTv1 }/name`, (req, res) => {
    const { name } = req.body;
    res.status(200);
    res.send(`Here's some information from the server based on your name, ${ name }.`);
});

app.listen(PORT, (error) => {
    if(!error) {
        console.log("The server is running!");
    } else {
        console.log("An error has occurred.");
    }
});
