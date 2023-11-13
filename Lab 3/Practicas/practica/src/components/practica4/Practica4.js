import React, { useState } from "react";
import Practica3 from "../practica3/Practica3";
import TaskList from "./taskList/TaskList";
import AddTask from "./addTask/AddTask";

const Practica4 = () => {
  const [loggedIn, setLoggedIn] = useState(false);
  const [tasks, setTasks] = useState([]);

  const handleLogin = () => {
    setLoggedIn(true);
  };

  const handleLogout = () => {
    setLoggedIn(false);
  };

  const handleAddTask = (text) => {
    const newTask = {
      id: Date.now(),
      text,
      completed: false,
    };
    setTasks([...tasks, newTask]);
  };

  const handleToggleComplete = (taskId) => {
    setTasks(
      tasks.map((task) =>
        task.id === taskId ? { ...task, completed: !task.completed } : task
      )
    );
  };

  const handleDeleteTask = (taskId) => {
    setTasks(tasks.filter((task) => task.id !== taskId));
  };

  return (
    <div>
      {loggedIn ? (
        <div>
          <h1>Lista de Tareas</h1>
          <button onClick={handleLogout}>Cerrar sesión</button>
          <TaskList
            tasks={tasks}
            onToggleComplete={handleToggleComplete}
            onDeleteTask={handleDeleteTask}
          />
          <AddTask onAddTask={handleAddTask} />
        </div>
      ) : (
        <div>
          <h1>Inicio de Sesión</h1>
          <Practica3 />
          <button onClick={handleLogin}>Iniciar sesion</button>
        </div>
      )}
    </div>
  );
};

export default Practica4;
