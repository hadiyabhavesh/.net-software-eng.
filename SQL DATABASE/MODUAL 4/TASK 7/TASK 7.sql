create database task7;
use task7;
create table Restaurant(id int primary key auto_increment,name varchar(50) not null,location varchar(50) not null,cuisine varchar(50));
create table FoodOrder(order_id int primary key,restaurant_id int,user_id int,order_total decimal(5,0),foreign key (restaurant_id) references restaurant(id));
insert into restaurant value (1, 'Dominos', 'Surat', 'Pizza'),(2, 'McDonalds', 'Ahmedabad', 'Fast Food'),(3, 'Subway', 'Vadodara', 'Sandwich');
insert into foodorder value (101, 1, 1, 1500),(102, 2, 2, 2500),(103, 3, 3, 800),(104, 1, 4, 3000),(105, 2, 5, 1200);
create table SpotifyUser(user_id int primary key, username varchar(40) unique,email varchar(40) not null,subscription_type varchar(40));
select * from spotifyuser;
insert into spotifyuser value (1, 'user1', 'user1@gmail.com', 'Premium'),(2, 'user2', 'user2@gmail.com', 'Free'),
(4, 'user4', 'user4@gmail.com', 'Premium'),(5, 'user5', 'user5@gmail.com', 'Free'),(6, 'user6', 'user6@gmail.com', 'Premium');
CREATE VIEW TopSpendersView AS SELECT SpotifyUser.username, FoodOrder.order_total FROM SpotifyUser 
JOIN FoodOrder ON SpotifyUser.user_id = FoodOrder.user_id WHERE FoodOrder.order_total > 1000;
SELECT username, order_total FROM TopSpendersView WHERE order_total > 2000 ORDER BY order_total DESC;