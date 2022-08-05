# Write your MySQL query statement below

select c.name as "Customers" from Customers as c LEFT JOIN Orders as o ON c.id=o.customerID where o.customerID is null;