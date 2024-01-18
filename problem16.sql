SELECT Customer_id,count(*) as Number_Of_Order FROM Orders
GROUP BY Customer_id
ORDER BY Number_Of_Order
