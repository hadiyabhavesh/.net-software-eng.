create database TASK3;
USE TASK3;
create table Restaurants(id INT auto_increment primary key,name VARCHAR(30),cuisine VARCHAR(30),rating DECIMAL(2,1),city VARCHAR(30));
select * from Restaurants;
use TASK3;
insert into Restaurants (name,cuisine,rating,city) value
('Spice Garden', 'Indian', 4.5, 'Surat'),
('Pizza Hub', 'Italian', 4.2, 'Ahmedabad'),
('Sushi World', 'Japanese', 4.7, 'Mumbai'),
('Taco House', 'Mexican', 4.0, 'Delhi'),
('Dragon Bowl', 'Chinese', 4.3, 'Vadodara');
DROP table restaurant;
update restaurants set rating=4.7 where id =1;
use task3;
delete from restaurants where rating<4.3;
update restaurants set city='Ahmedabad' where id<4;
select * from restaurants where rating>4 and city='Ahmedabad'




