create database OnlineGiftSpot
use OnlineGiftSpot
CREATE TABLE Customer (
    CustomerID INT PRIMARY KEY,
    Name VARCHAR(100),
    Email VARCHAR(100),
    Phone VARCHAR(15),
    Address TEXT
);

-- Step 4: Create Product table
CREATE TABLE Product (
    ProductID INT PRIMARY KEY,
    Name VARCHAR(100),
    Category VARCHAR(50),
    Price DECIMAL(10, 2),
    Stock INT
);

-- Step 5: Create Orders table
CREATE TABLE Orders (
    OrderID INT PRIMARY KEY,
    CustomerID INT,
    OrderDate DATE,
    TotalAmount DECIMAL(10, 2),
    FOREIGN KEY (CustomerID) REFERENCES Customer(CustomerID)
);

-- Step 6: Create OrderDetails table
CREATE TABLE OrderDetails (
    OrderDetailID INT PRIMARY KEY,
    OrderID INT,
    ProductID INT,
    Quantity INT,
    Price DECIMAL(10, 2),
    FOREIGN KEY (OrderID) REFERENCES Orders(OrderID),
    FOREIGN KEY (ProductID) REFERENCES Product(ProductID)
);

-- Step 7: Create Payment table
CREATE TABLE Payment (
    PaymentID INT PRIMARY KEY,
    OrderID INT,
    PaymentDate DATE,
    PaymentMethod VARCHAR(50),
    Amount DECIMAL(10, 2),
    FOREIGN KEY (OrderID) REFERENCES Orders(OrderID)
);

-- Step 8: Insert data into Customer table
INSERT INTO Customer VALUES
(1, 'Aaliya Khan', 'aaliya@example.com', '03001234567', 'Lahore'),
(2, 'Saeeda Jaffar', 'saeeda@example.com', '03111234567', 'Islamabad'),
(3, 'Zoya Ahmed', 'zoya@example.com', '03221234567', 'Karachi'),
(4, 'Hira Malik', 'hira@example.com', '03331234567', 'Rawalpindi'),
(5, 'Usman Tariq', 'usman@example.com', '03441234567', 'Faisalabad'),
(6, 'Bilal Zafar', 'bilal@example.com', '03551234567', 'Peshawar'),
(7, 'Fatima Noor', 'fatima@example.com', '03661234567', 'Multan'),
(8, 'Hamza Sheikh', 'hamza@example.com', '03771234567', 'Quetta');

-- Step 9: Insert data into Product table
INSERT INTO Product VALUES
(1, 'Chocolate Gift Box', 'Sweets', 1200.00, 50),
(2, 'Flower Bouquet', 'Flowers', 1500.00, 30),
(3, 'Perfume', 'Fragrance', 1800.00, 20),
(4, 'Customized Mug', 'Personalized', 800.00, 40);

-- Step 10: Insert data into Orders table
INSERT INTO Orders VALUES
(1, 1, '2025-06-12', 2700.00),
(2, 2, '2025-06-13', 1500.00),
(3, 3, '2025-06-14', 2600.00),
(4, 5, '2025-06-14', 2000.00);

-- Step 11: Insert data into OrderDetails table
INSERT INTO OrderDetails VALUES
(1, 1, 1, 1, 1200.00),
(2, 1, 3, 1, 1500.00),
(3, 2, 2, 1, 1500.00),
(4, 3, 3, 1, 1800.00),
(5, 3, 4, 1, 800.00),
(6, 4, 1, 1, 1200.00);

-- Step 12: Insert data into Payment table
INSERT INTO Payment VALUES
(1, 1, '2025-06-12', 'Easypaisa', 2700.00),
(2, 2, '2025-06-13', 'JazzCash', 1500.00),
(3, 3, '2025-06-14', 'Bank Transfer', 2600.00),
(4, 4, '2025-06-14', 'Cash on Delivery', 2000.00);

