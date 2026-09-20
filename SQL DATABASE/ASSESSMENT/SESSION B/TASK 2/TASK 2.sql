use foodapp_db;
CREATE TABLE orders (order_id INT AUTO_INCREMENT PRIMARY KEY,restaurant_id INT,customer_name VARCHAR(100),
total_amount DECIMAL(10,2),order_date DATE,FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id));
INSERT INTO orders (restaurant_id, customer_name, total_amount, order_date)
VALUES(1, 'Bhavesh', 1800.00, '2026-09-10'),(1, 'Rahul', 2500.00, '2026-09-11'),(1, 'Amit', 1200.00, '2026-09-12'),
(2, 'Neha', 3000.00, '2026-09-13'),(2, 'Priya', 2200.00, '2026-09-14'),(2, 'Karan', 1800.00, '2026-09-15'),
(3, 'Riya', 1500.00, '2026-09-16'),(3, 'Jay', 2700.00, '2026-09-17'),(3, 'Pooja', 1300.00, '2026-09-18'),
(4, 'Vivek', 3500.00, '2026-09-19'),(4, 'Meera', 2000.00, '2026-09-20'),(4, 'Sahil', 1700.00, '2026-09-21');
SELECT restaurants.restaurant_id,restaurants.name,SUM(orders.total_amount) AS total_revenue,AVG(orders.total_amount) AS average_order_value
FROM restaurants JOIN orders ON restaurants.restaurant_id = orders.restaurant_id GROUP BY restaurants.restaurant_id, restaurants.name;
SELECT restaurants.restaurant_id,restaurants.name,SUM(orders.total_amount) AS total_revenue
FROM restaurants JOIN orders ON restaurants.restaurant_id = orders.restaurant_id GROUP BY restaurants.restaurant_id, restaurants.name HAVING SUM(orders.total_amount) > 5000;
SELECT * FROM orders ORDER BY order_date DESC LIMIT 5;