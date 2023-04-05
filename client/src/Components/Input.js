import React, {Fragment, useState} from 'react';


const InputTodo = () => {
    const [description, setDescription] = useState("")

    const Submiting = async e => {
        e.preventDefault()
        // console.log(description)
        try{
            const body = { description }
            //console.log(JSON.stringify(body))
            const response = await fetch("http://localhost:5000/todos",
            {
                method: "POST",
                headers: {"Content-Type": "application/json"},
                body: JSON.stringify(body)
            })
            window.location = "/"
        } catch(error){
            console.log(error)
        }
    }

    return (
        <Fragment>
            <h1 className= 'text-center mt-5'>Afazeres</h1>
            <form className='d-flex mt-5' onSubmit={Submiting}>
                <input
                type="text"
                className='form-control'
                value = {description}
                onChange={e => setDescription(e.target.value)}
            />
            <button className='btn btn-success'>Adicionar</button>
            </form>
        </Fragment>
    )
}

export default InputTodo