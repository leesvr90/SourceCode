<!doctype html>
<!--[if lt IE 7 ]><html class="ie ie6" lang="en"> <![endif]-->
<!--[if IE 7 ]><html class="ie ie7" lang="en"> <![endif]-->
<!--[if IE 8 ]><html class="ie ie8" lang="en"> <![endif]-->
<!--[if (gte IE 9)|!(IE)]><!--> 	<html lang="en"> <!--<![endif]-->
<head>

	<!-- General Metas -->
	<meta charset="utf-8" />
	<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">	<!-- Force Latest IE rendering engine -->
	<title>CMDB Admin</title>
    <link type="image/png" href="<?php echo $base_url?>asset/images/favicon.png" rel="shortcut icon">
	<meta name="description" content="">
	<meta name="author" content="">
	<!--[if lt IE 9]>
		<script src="http://html5shim.googlecode.com/svn/trunk/html5.js"></script>
	<![endif]-->

	<!-- Mobile Specific Metas -->
	<meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1" />

	<!-- Stylesheets -->
	<link rel="stylesheet" href="<?php echo $base_url ?>asset/js/login/css/base.css">
	<link rel="stylesheet" href="<?php echo $base_url ?>asset/js/login/css/skeleton.css">
	<link rel="stylesheet" href="<?php echo $base_url ?>asset/js/login/css/layout.css">

</head>
<body style="background: url(<?php echo $base_url?>asset/js/login/images/bg<?php echo rand(1, 8);?>.jpg) center center fixed;
  -webkit-background-size: cover;
  -moz-background-size: cover;
  -o-background-size: cover;
  background-size: cover;">
	<?php if ($strError != "") { ?>
	<div class="notice">
		<a href="" class="close">close</a>
		<p class="warn">Whoops! We didn't recognise your username or password. Please try again.</p>
	</div>
    <?php } ?>



	<!-- Primary Page Layout -->

	<div class="container">

		<div class="form-bg">
			<form method="POST">
				<h2>CMDB Admin</h2>
				<p><input type="text" name="username" placeholder="Username"></p>
				<p><input type="password" name="password" placeholder="Password"></p>
				<label for="remember">
				  <input type="checkbox" id="remember" value="remember" />
				  <span>Remember me on this computer</span>
				</label>
				<button type="submit"></button>
			<form>
		</div>


		<!--<p class="forgot">Forgot your password? <a href="">Click here to reset it.</a></p>-->


	</div><!-- container -->

	<!-- JS  -->
	<script type="text/javascript" src="<?php echo $base_url?>asset/js/jquery-1.8.0.min.js"></script>
	<script src="<?php echo $base_url ?>asset/js/login/js/app.js"></script>

<!-- End Document -->
</body>
</html>