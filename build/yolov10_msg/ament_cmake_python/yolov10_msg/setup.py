from setuptools import find_packages
from setuptools import setup

setup(
    name='yolov10_msg',
    version='0.0.0',
    packages=find_packages(
        include=('yolov10_msg', 'yolov10_msg.*')),
)
