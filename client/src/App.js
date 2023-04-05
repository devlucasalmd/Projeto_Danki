import React, { Fragment } from 'react';
import InputTodo from './Components/Input';
import ListTodo from './Components/List';


function App() {
  return (
  <Fragment>
    <div className='container'>
      <InputTodo/>
      <ListTodo/>
    </div>
  </Fragment>
  )
}

export default App;
