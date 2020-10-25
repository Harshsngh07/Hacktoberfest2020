import 'dart:io';

void main() {

  // Get the system temp directory.
  var systemTempDir = Directory.systemTemp;

  // Creates dir/, dir/subdir/, and dir/subdir/file.txt in the system
  // temp directory.
  new File('${systemTempDir.path}/dir/subdir/file.txt').create(recursive: true)
    // The created file is returned as a Future.
    .then((file) {
      print(file.path);
  });
}