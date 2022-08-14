# Write your MySQL query statement below


select D.name as 'Department', E.name as 'Employee', E.salary as 'Salary'  from Department D, Employee E ,(select departmentId,max(salary) as 'max' from Employee group by departmentId) T where
D.id=T.departmentId and E.salary=T.max and E.DepartmentId = T.DepartmentId; 

# select max(salary) from Employee group by departmentId;