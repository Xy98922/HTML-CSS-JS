// JavaScript source code
const express = require('express');
const app = express();
var axios=require('axios');
app.all('/', (request, response) => {
    response.setHeader('Access-Control-Allow-Origin', '*');
    response.setHeader('Access-Control-Allow-Headers', '*');
    response.setHeader('Access-Control-Allow-Method', '*');
    
    response.send('成功访问');
});



app.listen(8000, () => {
    console.log("serve started,8000pot supervising....");
}); 