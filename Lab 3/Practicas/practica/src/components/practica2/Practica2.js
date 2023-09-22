import React from 'react'

const Practica2 = () => {
    const netIncomes = [
        {
            brand: "McDonalds", 
            income: 1291283
        }, 
        {
            brand: "Burger King", 
            income: 1927361
        }, 
        {
            brand: "KFC", 
            income: 1098463
        }
    ];
    const BrandTable = (netIncomes) =>{
        netIncomes.map((netIncomes)=> {return<tr><th>{netIncomes.brand}</th><th>{netIncomes.income}</th></tr>} 
        )
    
    }
  return (
    <div>
        <table>
    <tr>
      <th>Brand</th>
      <th>Income</th>
    </tr>
  </table>
  </div>
  )
}
BrandTable(netIncomes)









export default Practica2