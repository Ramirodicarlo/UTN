
import './App.css';
import Practica1 from './components/practica1/Practica1';
import Practica2 from './components/practica2/Practica2';
import Practica3 from './components/practica3/Practica3';

function App() {
  return (
    <div className='App'>
      <h1>Practica1</h1>
      <div><Practica1/></div>
      <h1>Practica2</h1>
      <h2>Tabla de Ingresos</h2>
      <Practica2/>
      <h1>Practica3</h1>
      <Practica3/>
    </div>
  );
}

export default App;
