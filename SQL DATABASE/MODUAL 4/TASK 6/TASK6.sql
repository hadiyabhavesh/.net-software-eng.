create database task6;
use task6;
create table orders(order_id int primary key,user_id int, order_date date);
insert into orders(order_id,user_id,order_date) value (1, 101, '2026-09-01'),(2, 101, '2026-09-02'),(3, 102, '2026-09-03'),
(4, 102, '2026-09-04'),(5, 102, '2026-09-05'),(6, 103, '2026-09-06');
select user_id,count(*) as order_count from orders group by user_id;
create table restaurants (restaurants_id int primary key,name varchar(50),rating float);
insert into  restaurants( restaurants_id,name,rating) value (1, 'Food House', 4.5),(2, 'Food House', 4.2),(3, 'Pizza Point', 3.8),
(4, 'Pizza Point', 4.0),(5, 'Spice Hub', 4.7),(6, 'Spice Hub', 4.5);
select name,avg(rating) as avg_rating from restaurants group by name; 
create table payments(user_id int primary key,amount int,payments_date date);
insert into payments(user_id,amount,payments_date) value(101, 1500, '2026-09-01'),(102, 2500, '2026-09-02'),
(103, 1800, '2026-09-03'),(104, 3000, '2026-09-04'),(105, 2200, '2026-09-05');
select user_id from payments where amount>2000;
create table movie(movie_id int primary key,name varchar(50),rating decimal(2,1));
insert into movie(movie_id,name,rating) value (1, 'Avengers', 8.5),(2, 'Avatar', 7.8),(3, 'Titanic', 8.0),
(4, 'Inception', 9.0),(5, 'Joker', 7.5);
select name as movie_name, rating from movie where rating>(select avg(rating) from movie);
