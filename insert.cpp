INSERT INTO Customers (name, contact_info, loyalty_id) VALUES ('Alice Monroe', 'alice@example.com', 'LOY123');
INSERT INTO Suppliers (name, contact_info, payment_terms) VALUES ('RareBooks Inc.', 'contact@rarebooks.com', 'Net 30');
INSERT INTO Products (title, category, price, stock_quantity) VALUES ('The Great Gatsby', 'Fiction', 19.99, 10);
INSERT INTO Orders (customer_id, order_date, status, total_amount) VALUES (1, '2023-09-21', 'Pending', 19.99);
INSERT INTO Deliveries (supplier_id, product_id, delivery_date, quantity_received) VALUES (1, 1, '2023-09-20', 20);
