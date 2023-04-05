//Conectar ao banco de dados

const Pool = require('pg').Pool

const pool = new Pool({
    user: "postgres",
    password: "1234",
    host: "localhost",
    port: 5432,
    database: "todolist" //nome do banco de dados criado
})

module.exports = pool;