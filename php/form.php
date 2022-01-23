<!DOCTYPE html>
<html>
    <head>
        <title>
            Form
        </title>
    </head>
    <body>
        <form action="form.php", method="get">
            Name :<input type="text", name ="username">
            <br>
            Age  :<input type="number", name = "age">
            <br>
            <input type="submit">
        </form>
        <br>    
    Your name is <?php echo $_GET["username"]; ?>
    , and your age is <?php echo $_GET["age"]; ?>
    </body>
</html>