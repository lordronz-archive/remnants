<!DOCTYPE html>
<html>

<head>
    <title>
        Form
    </title>
</head>

<body>
    <form action="POST.php" , method="post">
        Password : <input type="password" name= "password">
        <input type="submit">
    </form>
    <br>
    <?php echo $_POST["password"]; ?>
</body>

</html>