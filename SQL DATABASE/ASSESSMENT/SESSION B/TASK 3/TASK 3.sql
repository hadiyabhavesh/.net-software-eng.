create database ass_task3;
use ass_task3;
CREATE TABLE restaurants (restaurant_id INT PRIMARY KEY,name VARCHAR(100),city VARCHAR(50));
CREATE TABLE menu_items (item_id INT PRIMARY KEY,restaurant_id INT,item_name VARCHAR(100),price DECIMAL(10,2),
category VARCHAR(50),FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id));
INSERT INTO restaurants (restaurant_id, name, city)VALUES(1, 'Spice Garden', 'Surat'),(2, 'Food Palace', 'Ahmedabad'),
(3, 'Tasty Hub', 'Vadodara'),(4, 'Green Leaf', 'Rajkot'),(5, 'Royal Cafe', 'Surat');
INSERT INTO menu_items(item_id, restaurant_id, item_name, price, category)
VALUES(101, 1, 'Paneer Tikka', 180.00, 'Starter'),(102, 1, 'Veg Biryani', 220.00, 'Main Course'),(103, 1, 'Butter Naan', 50.00, 'Bread'),
(104, 2, 'Pizza', 250.00, 'Main Course'),(105, 2, 'Burger', 150.00, 'Fast Food'),(106, 2, 'French Fries', 100.00, 'Starter'),
(107, 3, 'Masala Dosa', 120.00, 'South Indian'),(108, 3, 'Idli', 80.00, 'South Indian'),(109, 3, 'Paneer Roll', 140.00, 'Fast Food'),
(110, 4, 'Pav Bhaji', 130.00, 'Fast Food'),(111, 4, 'Veg Sandwich', 110.00, 'Fast Food'),(112, 4, 'Cold Coffee', 90.00, 'Beverage');
SELECT restaurants.name, menu_items.item_name, menu_items.price FROM restaurants 
INNER JOIN menu_items ON restaurants.restaurant_id = menu_items.restaurant_id;
SELECT restaurants.name, menu_items.item_name, menu_items.price
FROM restaurants LEFT JOIN menu_items ON restaurants.restaurant_id = menu_items.restaurant_id;
CREATE VIEW restaurant_menu_summary AS SELECT restaurants.name,COUNT(menu_items.item_id),AVG(menu_items.price)
FROM restaurants LEFT JOIN menu_items ON restaurants.restaurant_id = menu_items.restaurant_id GROUP BY restaurants.restaurant_id, restaurants.name;
SELECT * FROM restaurant_menu_summary;