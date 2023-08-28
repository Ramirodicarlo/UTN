import React from "react";

const Availability = () => {
  return (
    <div>
      {beers.filter((available) => {
        return (available = true);
      })}
    </div>
  );
};

export default Availability;
