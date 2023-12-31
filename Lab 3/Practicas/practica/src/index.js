import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import { AuthenticationContextProvider } from './components/services/autheticationContext/AuthenticationContext';

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <AuthenticationContextProvider>
    <App />
  </AuthenticationContextProvider>
);


