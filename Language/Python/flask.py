from flask import Flask

app = Flask(__name__)


@app.route("/hello/")
@app.route("/hello/<name>")
def hello(name=""):
    return "<h1>Hello {}</h1>".format(name)


@app.route("/blog/")
@app.route("/blog/<int:postID>")
def blog(postID=0):
    if postID > 0:
        return "blog info {}".format(postID)
    else:
        return "blog"


if __name__ == '__main__':
    app.run(debug=True)
