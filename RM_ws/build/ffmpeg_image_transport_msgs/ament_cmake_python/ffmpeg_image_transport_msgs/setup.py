from setuptools import find_packages
from setuptools import setup

setup(
    name='ffmpeg_image_transport_msgs',
    version='1.0.1',
    packages=find_packages(
        include=('ffmpeg_image_transport_msgs', 'ffmpeg_image_transport_msgs.*')),
)
