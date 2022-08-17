# Write your MySQL query statement below

# select request_at as 'Day', ROUND((count(IF(t.status!='completed',TRUE,null))/count(*)),2) as 'Cancellation Rate' from Trips as t Join Users as u on u.users_id=t.client_id and u.banned="No" where t.request_at between "2013-10-01" and "2013-10-03" group by request_at


select request_at as Day, round(sum(status like 'cancelled%') / count(*), 2) as "Cancellation Rate"
from Trips 
where client_id not in (select users_id from Users where banned = "Yes") 
and driver_id not in (select users_id from Users where banned = "Yes")
and request_at between '2013-10-01' and '2013-10-03'
group by request_at 