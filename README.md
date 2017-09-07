# MyHTTP-Protocol-using-Socket-Programming

HTTP client as well server programme 

ABOUT http_server.c

This file work as server and we can host any html file.

ABOUT http_client.c

This file work as client request to the any address and print responce 

HOW TO RUN...

gcc http_server.c -o httpserver

gcc http_client.c -o httpclient

./httpclient <server address>

ex. for yahoo.com 

~ $ ./httpclient  98.138.253.109
response from the server: HTTP/1.1 400 Host Header Required
Date: Thu, 07 Sep 2017 12:35:10 GMT
Connection: keep-alive
Via: http/1.1 ir44.fp.ne1.yahoo.com (ApacheTrafficServer)
Server: ATS
Cache-Control: no-store
Content-Type: text/html
Content-Language: en
Content-Length: 6487

<!DOCTYPE html>
<html lang="en-us">
  <head>
    <meta http-equiv="content-type" content="text/html; charset=UTF-8">
    <meta charset="utf-8">
    <title>Yahoo</title>
    <meta name="viewport" content="width=device-width,initial-scale=1,minimal-ui">
    <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1">
    <style>
      html {
          height: 100%;
      }
      body {
          background: #fafafc url(https://s.yimg.com/nn/img/sad-panda-201402200631.png) 50% 50%;
          background-size: cover;
          height: 100%;
          text-align: center;
          font: 300 18px "helvetica neue", helvetica, verdana, tahoma, arial, sans-serif;
          margin: 0;
      }
      table {
          height: 100%;
          width: 100%;
          table-layout: fixed;
          border-collapse: collapse;
          border-spacing: 0;
          border: none;
      }
      h1 {
          font-size: 42px;
          font-weight: 400;
          color: #400090;
      }
      p {
          color: #1A1A1A;
      }
      #message-1 {
          font-weight: bold;
          margin: 0;
      }
      #message-2 {
          display: inline-block;
          *display: inline;
