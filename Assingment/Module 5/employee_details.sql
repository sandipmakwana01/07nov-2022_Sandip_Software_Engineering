-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Mar 01, 2023 at 12:49 PM
-- Server version: 10.4.27-MariaDB
-- PHP Version: 8.2.0

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `employee details`
--

-- --------------------------------------------------------

--
-- Table structure for table `employeee`
--

CREATE TABLE `employeee` (
  `employee_id` int(11) DEFAULT NULL,
  `first_name` varchar(600) DEFAULT NULL,
  `last_name` varchar(600) DEFAULT NULL,
  `salary` varchar(600) DEFAULT NULL,
  `joining_date` varchar(600) DEFAULT NULL,
  `department` varchar(600) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employeee`
--

INSERT INTO `employeee` (`employee_id`, `first_name`, `last_name`, `salary`, `joining_date`, `department`) VALUES
(1, 'John', 'Abraham', '1000000', '01-JAN-13 12.00.00 AM', 'Banking'),
(2, 'Michael', 'Clarke', '800000', '01-JAN-13 12.00.00 AM', 'Insurance'),
(3, 'Roy', 'Thomas', '700000', '01-FEB-13 12.00.00 AM', 'banking'),
(4, 'Tom', 'Jose', '600000', '01-FEB-13 12.00.00 AM', 'Insurance'),
(5, 'Jerry', 'Pinto', '650000', '01-FEB-13 12.00.00 AM', 'Insurance'),
(6, 'Philip', 'Mathew', '750000', '01-JAN-13 12.00.00 AM', 'Services'),
(7, 'Testname1', '123', '650000', '01-JAN-13 12.00.00 AM', 'Services'),
(8, 'Testname2', 'Lname%', '600000', '01-FEB-13 12.00.00 AM', 'Insurance');

-- --------------------------------------------------------

--
-- Table structure for table `incentive`
--

CREATE TABLE `incentive` (
  `employee_ref_id` int(11) DEFAULT NULL,
  `incentive_date` varchar(90) DEFAULT NULL,
  `incentive_amount` varchar(90) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `incentive`
--

INSERT INTO `incentive` (`employee_ref_id`, `incentive_date`, `incentive_amount`) VALUES
(1, '01-JAN-13', '5000'),
(2, '01-FEB-13', '3000'),
(3, '01-FEB-13', '4000'),
(1, '01-JAN-13', '4500'),
(2, '01-JAN-13', '3500');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
