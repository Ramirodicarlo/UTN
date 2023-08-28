import React from "react";

const BeerItem = (id, beerName, price, beerStyle, available) => {
  const dolar = 735;
  return (
    <div>
      <h2>Nombre:{beerName}</h2>
      <h2>Estilo:{beerStyle}</h2>
      <h2>Precio:{price * dolar}</h2>
      <h2>Disponible:{available ? "Sii" : "Noo"}</h2>
    </div>
  );
};

export default BeerItem;
