from flask import Flask, render_template
from flask_socketio import SocketIO, emit
import sys
import os
    
app = Flask(__name__)
app.config['SECRET_KEY'] = 'secret!'
#app.root_path = os.path.dirname(os.path.abspath(__file__))
socketio = SocketIO(app)

@app.route('/')
def index():
    return render_template('index.html')

@socketio.event
def my_event(message):
    emit('my_response', {'data': 'got it!'})

if __name__ == '__main__':
    socketio.run(app)

# @socketio.event
# def do(move: Move):
# 	pass


# @socketio.event
# def queue(move: Move):
# 	pass


# class Move:
# 	# Rotation: 0, staight line
# 	#           1, One the stop rotation
# 	speed, duration, rotation



# class Motor:
# 	def stop(self):
# 		pass

# 	def start(self, speed):
# 		pass

# 	def dir(self, dir):
# 		pass