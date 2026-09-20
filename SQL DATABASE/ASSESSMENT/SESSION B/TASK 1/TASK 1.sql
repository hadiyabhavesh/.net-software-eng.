create database  foodapp_db;
use  foodapp_db;
create table restaurants(restaurant_id INT AUTO_INCREMENT PRIMARY KEY,name VARCHAR(30) NOT NULL,city
VARCHAR(30), cuisine_type VARCHAR(30),rating DECIMAL(3,1));
insert into  restaurants value (1,'Spice Garden', 'Surat', 'Indian', 4.5),(2,'Food Palace', 'Ahmedabad', 'Gujarati', 4.2),
(3,'Pizza House', 'Vadodara', 'Italian', 4.3),(4,'Royal Tadka', 'Surat', 'Punjabi', 4.6),
(5,'Taste Hub', 'Ahmedabad', 'Chinese', 4.1),(6,'Green Leaf', 'Vadodara', 'South Indian', 4.4);
select * from  restaurants;
update restaurants set rating=4.2 where  restaurant_id=1;
delete from  restaurants where  restaurant_id=3;
select * from  restaurants order by rating desc;
insert into restaurants value (3,'Pizza House', 'Vadodara', 'Italian', 4.3);