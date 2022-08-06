# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below


delete row1 from Person as row1 INNER JOIN Person as row2 where row1.id>row2.id and row1.email=row2.email ;