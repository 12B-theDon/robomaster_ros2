from setuptools import find_packages
from setuptools import setup

setup(
    name='robomaster_msgs',
    version='0.2.0',
    packages=find_packages(
        include=('robomaster_msgs', 'robomaster_msgs.*')),
)
