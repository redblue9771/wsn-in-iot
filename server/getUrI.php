<?php
 header('Access-Control-Allow-Origin:*'); 
 header('Content-Type:text/json;charset=utf-8');

 echo json_encode(["url"=>"ws://111.230.150.41:2019/"]);
?>