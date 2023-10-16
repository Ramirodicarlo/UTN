import { useContext,useRef, useState } from "react";
import { AuthenticationContext } from "../services/autheticationContext/AuthenticationContext";

const Practica3 = () => {
    const [user, setUser] = useState("");
  
    const userRef = useRef(null);
  
    const userChangeHandler = (event) => {
      if (userRef.current.value.includes("o")||userRef.current.value.includes("O")) {
        alert("user invalido, incluye o/O!");
        return;
      }
      setUser(event.target.value);
    };
  
    const {handleLogin}  = useContext(AuthenticationContext);

    const signInHandler = () => {
      if (userRef.current.value.includes("o")||userRef.current.value.includes("O")) {
        alert("user invalido, incluye o/O!");
        return;
      }
      if (userRef.current.value.length === 0) {
        alert("user vacio!!");
        return;
      }
      handleLogin(user);
    };
  
    return (
      <div className="login-container">
        <div >
          <div className="input-container">
            <input
              className="input-control"
              placeholder="user"
              type="user"
              onChange={userChangeHandler}
              value={user}
              ref={userRef}
            />
          </div>
          <button onClick={signInHandler} className="signin-button" type="button">
            Iniciar sesión
          </button>
        </div>
      </div>
    );
  
  
   
}

export default Practica3
