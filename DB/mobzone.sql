-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Apr 12, 2022 at 10:18 AM
-- Server version: 10.4.22-MariaDB
-- PHP Version: 8.1.2

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `mobzone`
--

-- --------------------------------------------------------

--
-- Table structure for table `evaluations`
--

CREATE TABLE `evaluations` (
  `EvaluationID` int(11) NOT NULL,
  `User Name` varchar(255) NOT NULL,
  `Mobile Name` varchar(255) NOT NULL,
  `Valuation_Value` int(1) NOT NULL DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table `favorite`
--

CREATE TABLE `favorite` (
  `UserID` int(11) NOT NULL,
  `Username` varchar(255) NOT NULL,
  `mob_name` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `favorite`
--

INSERT INTO `favorite` (`UserID`, `Username`, `mob_name`) VALUES
(136, 'mohamed123', ''),
(137, 'mohamed123', ''),
(138, 'mohamed123', ''),
(139, 'mohamed123', '');

-- --------------------------------------------------------

--
-- Table structure for table `mobileinfo`
--

CREATE TABLE `mobileinfo` (
  `MobileID` int(11) NOT NULL,
  `mob_company` varchar(250) NOT NULL,
  `mob_name` varchar(255) NOT NULL,
  `release_date` int(14) NOT NULL,
  `network` longtext NOT NULL,
  `material` longtext NOT NULL,
  `size` longtext NOT NULL,
  `audio` longtext NOT NULL,
  `mic` longtext NOT NULL,
  `processor` longtext NOT NULL,
  `camera` longtext NOT NULL,
  `screen` longtext NOT NULL,
  `storage` longtext NOT NULL,
  `ram` longtext NOT NULL,
  `operating_system` longtext NOT NULL,
  `battery` longtext NOT NULL,
  `amazon_price` varchar(255) NOT NULL,
  `tradeline_price` varchar(255) NOT NULL,
  `betech_price` varchar(255) NOT NULL,
  `jumia_price` varchar(255) NOT NULL,
  `image1` varchar(255) NOT NULL,
  `image2` varchar(255) NOT NULL,
  `image3` varchar(255) NOT NULL,
  `image4` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `mobileinfo`
--

INSERT INTO `mobileinfo` (`MobileID`, `mob_company`, `mob_name`, `release_date`, `network`, `material`, `size`, `audio`, `mic`, `processor`, `camera`, `screen`, `storage`, `ram`, `operating_system`, `battery`, `amazon_price`, `tradeline_price`, `betech_price`, `jumia_price`, `image1`, `image2`, `image3`, `image4`) VALUES
(72, 'apple', 'iPhone 13 Pro Max', 0, '- يدعم الـ NFC .\r\n- يدعم الهاتف شريحتين إتصال من نوع Nano Sim و eSIM .\r\n- يدعم شبكات الاتصال الجيل الثاني الـ 2G والجيل الثالث الـ 3G والجيل الرابع الـ 4G والجيل الخامس الـ 5G .\r\n- الواي فاي يأتي بترددات الـ a/b/g/n/ac/6 بالإضافة إلى دعمه إلى الـ Dual-ban', '- متانة وجودة الخامات المستخدمة في تصنيع الهاتف تأتي من الزجاج مع إطار من الستانلس ستيل .\r\n- يأتي الهاتف مقاوم للماء والغبار بشهادة الـ IP68 لتتمكن من وضع الهاتف في الماء حتى 6 متر لمدة 30 دقيقة .', 'يأتي الهاتف بأبعاد 160.8×78.1×7.7 ملم مع وزن 240 جرام .\r\n', 'يدعم الهاتف السماعات الخارجية الاستيريو والتي تقدم تجربة صوتية مميزة جداً .', 'يدعم ميكروفون إضافي لعزل الضوضاء .\r\n', 'أما عن الأداء فقد تم استخدام معالج الـ A15 Bionic بتكنولوجيا الـ 5 نانو مع معالج رسومي من نوع Apple GPU 5 Core بخمسة أنوية للحصول على أداء أقوى بصورة ملحوظة فقد صرحت شركة ابل بأن الأداء الرسومي أقوى بنسبة 30% وأقوى في الأداء بنسبة 50% من الـ A14 السابق فق', 'الكاميرا الأمامية تأتي بدقة 12 ميجا بكسل بفتحة عدسة F/2.2 أما عن الكاميرا الثانية فتأتي بدقة SL 3D وهي الخاصة بالعزل وبصمة الوجه وتطلق عليها ابل مسمى الـ TrueDepth والتي سبق وأن رأيناها في ايفون 12 .\r\nالكاميرا الخلفية تأتي بكاميرا رباعية حيث تأتي الكاميرا', 'الشاشة تأتي من نوع Super Retina XDR OLED بمساحة 6.7 إنش بدقة 1284×2778 بكسل بمعدل كثافة بكسلات 458 بكسل لكل إنش مع دعم أبعاد العرض بنسبة 19.5:9 لعرض محتوى أكبر على شاشة الهاتف سواء أثناء مشاهدة الفيديوهات أو لعب الألعاب بالإضافة لوجود طبقة مقاومة للتبصيم ', 'اختبار\r\n<br>\r\nاختبار', 'يتوفر الهاتف بأكثر من إصدار من الذاكرة الصلبة والذاكرة العشوائية على النحو التالي :-\r\n– الإصدار الأول يأتي بذاكرة صلبة بسعة 128 جيجا بايت من نوع NVMe مع ذاكرة عشوائية بسعة 6 جيجا بايت .\r\n– الإصدار الثاني يأتي بذاكرة صلبة بسعة 256 جيجا بايت من نوع NVMe مع ', 'يأتي بنظام تشغيل ابل الأحدث الـ iOS 15 .\r\n', 'بطارية بحجم 4373 مللي أمبيرو أعلنت أبل بأن البطارية تعمل لفترة أطول بساعتين ونصف من الـ iPhone 12 Pro Max السابق .\r\nالبطارية تدعم الشحن السريع بقوة 20 واط والشحن اللاسلكي الـ MagSafe بقوة 15 واط والشحن اللاسلكي مع شواحن الـ Qi العادية بقوة 7.5 واط .', '29000', '29000', '29000', '29000', 'C:/xampp/htdocs/mobzone/data/upload/mobiles/iPhone 13 Pro Max/1.jpg', 'C:/xampp/htdocs/mobzone/data/upload/mobiles/iPhone 13 Pro Max/2.jpg', 'C:/xampp/htdocs/mobzone/data/upload/mobiles/iPhone 13 Pro Max/3.jpg', 'C:/xampp/htdocs/mobzone/data/upload/mobiles/iPhone 13 Pro Max/4.jpg'),
(73, 'oneplus', 'OnePlus 7 Pro', 2022, 'يدعم الإتصال قريب المدى الـ NFC . \r\n<br>\r\nيدعم الهاتف شريحتين إتصال من نوع Nano Sim .\r\n<br>\r\nيدعم معظم الترددات حيث يدعم شبكات الجيل الثاني الـ 2G والجيل الثالث الـ 3G والجيل الرابع الـ 4G \r\n<br>\r\nيدعم الواي فاي بترددات الـ a/b/g/n/ac مع دعمه إلى الـ Dual-band, WiFi Direct, DLNA, hotspot .', 'يأتي الهاتف مصنوع من الزجاج مع إطار من معدن الالمونيوم .\r\n', 'يأتي الهاتف بأبعاد 162.6×75.9×8.8 ملم مع وزن 206 جرام .\r\n', 'SDFDSFSD', 'يدعم الهاتف ميكروفون ثانوي الخاص بعزل الضوضاء والضجيج أثناء إستخدام الهاتف بصفة عامة ', 'أما عن قوة الأداء فالهاتف يأتي بالمعالج الأقوى والأحدث من شركة كوالكم من نوع SDM855 Snapdragon 855 بتقنية الـ 7nm ، مع معالج رسومي من نوع Adreno 640 .', 'أما عن قوة الأداء فالهاتف يأتي بالمعالج الأقوى والأحدث من شركة كوالكم من نوع SDM855 Snapdragon 855 بتقنية الـ 7nm ، مع معالج رسومي من نوع Adreno 640 .\r\n<br>\r\nالكاميرا الخلفية تأتي بكاميرا ثلاثية وستجدها بارزة قليلاً عن ظهر الهاتف حيث تأتي الكاميرا الأولى بدقة 48 ميجا بكسل بفتحة عدسة f/1.6 وهي الكاميرا الأساسية وتأتي بمستشعر من نوع Sony IMX586 مع دعم التثبيت البصري والكاميرا الثانية تأتي بدقة 16 ميجا بكسل بفتحة عدسة F/2.2 للتصوير العريض جداً الـ ultrawide والكاميرا الثالثة تأتي بدقة 8 ميجا بكسل بفتحة عدسة F/2.4 للتصوير الـ Telephoto لعمل زوم حتى ثلاث مرات وتدعم المثبت البصري , مع فلاش ثنائي من نوع ليد فلاش .\r\n<br>\r\nالكاميرات تدعم عدة أوضاع للتصوير مثل الـ UltraShot, Nightscape, Studio Lighting, Portrait, Pro Mode, Panorama, HDR, AI Scene Detection, RAW Image .', 'الشاشة تأتي بالواجهة الكامل بدون أي نوتش أو ثقب فالكاميرا الأمامية تعمل عن طريق سلايدر فالشاشة تأتي من نوع Fluid AMOLED بمساحة 6.67 إنش بجودة الـ QHD+ بدقة الـ 1440×3120 بكسل بمعدل كثافة بكسلات 516 بكسل لكل إنش وتأتي مع ريفريش ريت 90 هيرتز بأبعاد 19.5:9 مع وجود طبقة حماية من نوع Corning Gorilla Glass ولكن لم تعلن الشركة عن أي إصدار تحديداً والشاشة تدعم عدة أوضاع مثل الـ Video Enhancer والـ Reading Mode والـ Night Mode كما يمكنك تغيير دقة الشاشة بين الـ QHD+ والـ FHD+ بدقة 2336×1080 لتجربة أفضل للبطارية .', 'ADADASD', 'الهاتف يأتي بأكثر من إصدار من الذاكرة الصلبة والذاكرة العشوائية على النحو التالي :-\r\n– الإصدار الأول يأتي بذاكرة صلبة بسعة 128 جيجا بايت مع ذاكرة عشوائية بسعة 6 جيجا بايت .\r\n– الإصدار الثاني يأتي بذاكرة صلبة بسعة 256 جيجا بايت مع ذاكرة عشوائية بسعة 8 جيجا بايت .\r\n– الإصدار الثالث يأتي بذاكرة صلبة بسعة 256 جيجا بايت مع ذاكرة عشوائية بسعة 12 جيجا بايت .\r\n– الذاكرة الصلبة تأتي من نوع UFS 3.0 والذاكرة العشوائية تأتي من نوع LPDDR4X .', 'يأتي الهاتف بنظام تشغيل Android 9.0 Pie مع واجهة وان بلس الأحدث الـ OxygenOS 9 .', 'البطارية تأتي بسعة 4000 ملي أميبر وتدعم الشحن السريع بتقنية Warp Charge بقوة 30 واط .\r\n<br>\r\nيأتي منفذ الـ USB من نوع Type C بإصدار 3.1 كما يدعم خاصية الـ OTG .', '12الف', '12الف', '12الف', '12الف', 'C:/xampp/htdocs/mobzone/data/upload/mobiles/OnePlus 7 Pro/1.jpg', 'C:/xampp/htdocs/mobzone/data/upload/mobiles/OnePlus 7 Pro/2.jpg', 'C:/xampp/htdocs/mobzone/data/upload/mobiles/OnePlus 7 Pro/3.jpg', 'C:/xampp/htdocs/mobzone/data/upload/mobiles/OnePlus 7 Pro/4.jpg');

-- --------------------------------------------------------

--
-- Table structure for table `news`
--

CREATE TABLE `news` (
  `NewsID` int(11) NOT NULL,
  `news_title` varchar(255) NOT NULL,
  `writer_name` varchar(255) NOT NULL,
  `release_date` int(14) NOT NULL,
  `first_paragraph` longtext NOT NULL,
  `sub_title` varchar(255) NOT NULL,
  `second_paragraph` longtext NOT NULL,
  `third_paragraph` longtext NOT NULL,
  `image1` varchar(255) NOT NULL,
  `image2` varchar(255) NOT NULL,
  `image3` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `news`
--

INSERT INTO `news` (`NewsID`, `news_title`, `writer_name`, `release_date`, `first_paragraph`, `sub_title`, `second_paragraph`, `third_paragraph`, `image1`, `image2`, `image3`) VALUES
(72, 'الكشف عن Realme C31 الإقتصادي الجديد', 'احمد عادل', 2022, 'كشفت شركة ريلمي بشكل رسمي عن هاتفها الإقتصادي الجديد الذي ينضم للسلسلة رخيصة الثمن C في الخارج، ويأتي Realme C31 الجديد ليُقدم مجموعة مواصفات إقتصادية في المقام الأول مع تسعير مُنخفض ليُناسب شريحة كبيرة من المستهلكين عادًة ما تبحث عن هواتف متكاملة مقابل ثمن رخيص.\r\n<br><br>', 'المواصفات', 'أبعاد 76.2×164.7×8.4 مم<br>\r\nوزن 197 جرام<br>\r\nخامات خارجية من البلاستيك بالكامل<br>\r\nدعم تركيب شريحتين إتصال 4G مع كارت ميموري 1 تيرا في نفس الوقت<br>\r\nشاشة من نوع IPS LCD بحجم 6.5 بوصة بدقة 720×1600 بيكسل جودتها HD+ مع كثافة بيكسلات 270 بيكسل لكل بوصة وابعاد عرض 20:9 وسطوع يصل الى 400 شمعة<br>\r\nمعالج Unisoc Tiger T612 ثماني النواة، الإثنين الأقوى من نوع Cortex A75 بتردد 1.8 جيجا هيرتز، دقة تصنيع المعالج 12 نانو ميتر والمعالج الرسومي هو Mali-G57 MP1\r\n<br>\r\nواجهة Realme UI 2.0 مبنية على Android 11\r\n<br>\r\nمساحة تخزين 32 جيجا مع 3 جيجا رام او 64 جيجا مع 4 جيجا رام\r\nالرامات من نوع LPDDR4X والذاكرة من نوع eMMC 5.1\r\n<br>\r\nكاميرا أمامية واحدة بدقة 5 ميجا بيكسل بفتحة عدسة F/2.0 تدعم تصوير فيديوهات بجودة 720p@30fps\r\nكاميرا خلفية ثُلاثية، الأساسية 13 ميجا بيكسل بفتحة عدسة F/2.2، الثانية 2 ميجا بيكسل بفتحة عدسة F/2.4 وهي ماكرو، الأخيرة 0.3 ميجا بيكسل بفتحة عدسة F/2.8 وهي مُخصصة للعزل\r\nالكاميرات تدعم تصوير فيديوهات بجودة 1080p@30fps مع دعم للفلاش الـLED\r\n<br>\r\nالهاتف يدعم منفذ السماعات الـ3.5 مللي\r\n<br>\r\nسماعات الهاتف الخارجية تأتي في ظهر الهاتف\r\n<br>\r\nالهاتف لا يدعم مستشعر الـNFC\r\n<br>\r\nمستشعر بصمة الإصبع موجود على زِر الباور\r\n<br>\r\nيُمكن إلغاء قفل الهاتف عن طريق التعرف على الوجه\r\n<br>\r\nبطارية ليثيوم بوليمر بحجم 5000 مللي امبير تدعم الشحن بقدرة 10 وات عن طريق MicroUSB 2.0\r\nألوان الهاتف الأزرق والأسود', '<br>\r\nتم تسعير هاتف Realme C31 الجديد في اندونيسيا بشكل رسمي للنسخة الـ32 جيجا مع 3 جيجا رام بسعر 110 دولار او حوالي 2050 جنية مصري، اما النسخة الـ64 جيجا مع 4 جيجا رام فتم تسعيرها بسعر 125 دولار او حوالي 2300 جنية مصري، والهاتف مُتاح في إندونيسيا وسيُتاح في الهند يوم 31 مارس المُقبل.\r\n<br><br>\r\nالهاتف يعتبر الجيل الجديد من Realme C21، جاء ليُقدم تحسينات على جانب الأداء من خلال إستخدام معالج أقوى بفرق بسيط، مع نفس الكاميرات ونفس البطارية، بتغيير مكان مستشعر بصمة الإصبع ليُصبح على زِر الباور بدلًا من وجوده في ظهر الهاتف، وبشكل عام يعتبر الهاتف مقبول في فئته السعرية.', 'C:/xampp/htdocs/mobzone/data/upload/news/الكشف عن Realme C31 الإقتصادي الجديد/1.jpg', 'C:/xampp/htdocs/mobzone/data/upload/news/الكشف عن Realme C31 الإقتصادي الجديد/2.jpg', 'C:/xampp/htdocs/mobzone/data/upload/news/الكشف عن Realme C31 الإقتصادي الجديد/3.jpg');

-- --------------------------------------------------------

--
-- Table structure for table `tips`
--

CREATE TABLE `tips` (
  `TipsID` int(14) NOT NULL,
  `tips_title` int(11) NOT NULL,
  `writer_name` int(11) NOT NULL,
  `release_date` int(11) NOT NULL,
  `first_paragraph` int(11) NOT NULL,
  `sub_title` int(11) NOT NULL,
  `second_paragraph` int(11) NOT NULL,
  `third_paragraph` varchar(255) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `UserID` int(11) NOT NULL,
  `Name` varchar(255) NOT NULL,
  `Email` varchar(255) NOT NULL,
  `Username` varchar(255) NOT NULL,
  `Password` varchar(255) NOT NULL,
  `GroupID` int(11) NOT NULL DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`UserID`, `Name`, `Email`, `Username`, `Password`, `GroupID`) VALUES
(11, 'Ahmed Adel', 'ahmed@gmail.com', 'Ahmed_Adel', '7c222fb2927d828af22f592134e8932480637c0d', 1),
(12, 'mohamed', 'mohamed123@email.com', 'Mohamed123', '7c222fb2927d828af22f592134e8932480637c0d', 0),
(15, 'Test Name', 'test@email.com', 'amr', '7c222fb2927d828af22f592134e8932480637c0d', 0);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `evaluations`
--
ALTER TABLE `evaluations`
  ADD PRIMARY KEY (`EvaluationID`);

--
-- Indexes for table `favorite`
--
ALTER TABLE `favorite`
  ADD PRIMARY KEY (`UserID`);

--
-- Indexes for table `mobileinfo`
--
ALTER TABLE `mobileinfo`
  ADD PRIMARY KEY (`MobileID`),
  ADD UNIQUE KEY `Mobile Name` (`mob_name`);

--
-- Indexes for table `news`
--
ALTER TABLE `news`
  ADD PRIMARY KEY (`NewsID`),
  ADD UNIQUE KEY `news_title` (`news_title`);

--
-- Indexes for table `tips`
--
ALTER TABLE `tips`
  ADD PRIMARY KEY (`TipsID`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`UserID`),
  ADD UNIQUE KEY `Username` (`Username`),
  ADD UNIQUE KEY `Email` (`Email`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `evaluations`
--
ALTER TABLE `evaluations`
  MODIFY `EvaluationID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=49;

--
-- AUTO_INCREMENT for table `favorite`
--
ALTER TABLE `favorite`
  MODIFY `UserID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=140;

--
-- AUTO_INCREMENT for table `mobileinfo`
--
ALTER TABLE `mobileinfo`
  MODIFY `MobileID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=74;

--
-- AUTO_INCREMENT for table `news`
--
ALTER TABLE `news`
  MODIFY `NewsID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=74;

--
-- AUTO_INCREMENT for table `tips`
--
ALTER TABLE `tips`
  MODIFY `TipsID` int(14) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table `users`
--
ALTER TABLE `users`
  MODIFY `UserID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=18;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
