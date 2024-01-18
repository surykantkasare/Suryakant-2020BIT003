-- all customers who placed at least one order
SELECT * FROM Customers 
WHERE Customer_id IN (SELECT Customer_id FROM Orders);