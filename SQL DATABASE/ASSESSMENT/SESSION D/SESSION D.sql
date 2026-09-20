create database SESSION_D;
USE SESSION_D;
CREATE TABLE restaurants (
    restaurant_id INT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    city VARCHAR(50) NOT NULL,
    cuisine_type VARCHAR(50) NOT NULL,
    created_at DATETIME NOT NULL
);
CREATE TABLE menu_items (
    item_id INT PRIMARY KEY,
    restaurant_id INT NOT NULL,
    item_name VARCHAR(100) NOT NULL,
    price DECIMAL(10,2) NOT NULL,
    category VARCHAR(50) NOT NULL,
    FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id)
);
CREATE TABLE orders (
    order_id INT PRIMARY KEY AUTO_INCREMENT,
    customer_name VARCHAR(100) NOT NULL,
    restaurant_id INT NOT NULL,
    item_id INT NOT NULL,
    quantity INT NOT NULL,
    total_amount DECIMAL(10,2) NOT NULL,
    order_date DATETIME NOT NULL,
    FOREIGN KEY (restaurant_id) REFERENCES restaurants(restaurant_id)
);
INSERT INTO restaurants
(restaurant_id, name, city, cuisine_type, created_at)
VALUES
(1, 'Spice Hub', 'Surat', 'Indian', '2026-09-01 10:00:00'),
(2, 'Pizza Point', 'Ahmedabad', 'Italian', '2026-09-02 11:00:00'),
(3, 'Food Corner', 'Vadodara', 'Chinese', '2026-09-03 12:00:00');
INSERT INTO menu_items
(item_id, restaurant_id, item_name, price, category)
VALUES
(101, 1, 'Paneer Tikka', 250.00, 'Starter'),
(102, 1, 'Butter Naan', 60.00, 'Main Course'),
(103, 1, 'Gulab Jamun', 80.00, 'Dessert'),
(104, 1, 'Masala Chai', 40.00, 'Beverage'),
(105, 2, 'Margherita Pizza', 300.00, 'Main Course'),
(106, 2, 'Garlic Bread', 150.00, 'Starter'),
(107, 2, 'Brownie', 120.00, 'Dessert'),
(108, 2, 'Cold Coffee', 100.00, 'Beverage'),
(109, 3, 'Spring Rolls', 180.00, 'Starter'),
(110, 3, 'Noodles', 220.00, 'Main Course'),
(111, 3, 'Ice Cream', 90.00, 'Dessert'),
(112, 3, 'Lemon Tea', 70.00, 'Beverage');
INSERT INTO orders
(customer_name, restaurant_id, item_id, quantity, total_amount, order_date)
VALUES
('Rahul', 1, 101, 2, 500.00, '2026-09-10 12:00:00'),
('Amit', 1, 102, 3, 180.00, '2026-09-10 13:00:00'),
('Priya', 1, 103, 2, 160.00, '2026-09-11 14:00:00'),
('Neha', 1, 104, 4, 160.00, '2026-09-11 15:00:00'),
('Karan', 1, 101, 1, 250.00, '2026-09-12 16:00:00'),
('Riya', 2, 105, 2, 600.00, '2026-09-12 18:00:00'),
('Vishal', 2, 106, 2, 300.00, '2026-09-13 19:00:00'),
('Mehul', 2, 107, 3, 360.00, '2026-09-13 20:00:00'),
('Pooja', 2, 108, 2, 200.00, '2026-09-14 18:30:00'),
('Jay', 2, 105, 1, 300.00, '2026-09-14 19:30:00'),
('Ankit', 3, 109, 2, 360.00, '2026-09-15 12:30:00'),
('Komal', 3, 110, 2, 440.00, '2026-09-15 13:30:00'),
('Nisha', 3, 111, 3, 270.00, '2026-09-16 14:30:00'),
('Harsh', 3, 112, 2, 140.00, '2026-09-16 15:30:00'),
('Dhruv', 3, 110, 1, 220.00, '2026-09-17 16:30:00');
DELIMITER //
CREATE PROCEDURE restaurant_monthly_summary(
    IN p_restaurant_id INT,
    IN p_month INT
)
BEGIN
    DECLARE order_count INT DEFAULT 0;
    IF p_month < 1 OR p_month > 12 THEN
	SELECT 'Invalid month. Enter a month between 1 and 12.' AS message;
    ELSE
	SELECT COUNT(*)
	INTO order_count
	FROM orders
	WHERE restaurant_id = p_restaurant_id
	AND MONTH(order_date) = p_month;
	IF order_count = 0 THEN
	SELECT CONCAT(
	'No orders found for restaurant ',
	p_restaurant_id,
	' in month ',
	p_month
	) AS message;
	ELSE
	SELECT
	restaurant_id,
	COUNT(order_id) AS total_orders,
	SUM(total_amount) AS total_revenue,
	AVG(total_amount) AS average_order_value
	FROM orders
	WHERE restaurant_id = p_restaurant_id
	AND MONTH(order_date) = p_month
	GROUP BY restaurant_id;
	END IF;
    END IF;
END //
DELIMITER ;
CALL restaurant_monthly_summary(1, 9);
CALL restaurant_monthly_summary(2, 9);
CALL restaurant_monthly_summary(1, 8);