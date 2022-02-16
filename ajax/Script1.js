// JavaScript source code
const express = require('express');
const app = express();

app.all('/jQuery', (request, response) => {
    response.setHeader('Access-Control-Allow-Origin', '*');
    response.setHeader('Access-Control-Allow-Headers', '*');
    let a = {
        'name': 'xiaoyang',
        'age': 200
    };
    response.send(JSON.stringify(a));
});



app.listen(8000, () => {
    console.log("serve started,8000pot supervising....");
}); 