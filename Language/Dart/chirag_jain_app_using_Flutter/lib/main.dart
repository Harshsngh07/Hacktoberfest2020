import 'package:flutter/material.dart';

void main() {
  runApp(
    MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.cyan[200],
        appBar: AppBar(
          backgroundColor: Colors.deepPurple[700],
          title: Center(
            child: Text('I am Chirag Jain'),
          ),
        ),
        body: Center(
          child: Image(
            image: AssetImage('images/IMG_20200705_105518.png'),
          ),
        ),
      ),
    ),
  );
}
