# Write your MySQL query statement below
SELECT FirstName, LastName, City, State
FROM Person left join Address
on Person.PersonId = Address.PersonId