import os
from glob import glob
from setuptools import setup

package_name = 'cart_controller'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*launch.[pxy][yma]*')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='suke',
    maintainer_email='keeeesukee@gmail.com',
    description='',
    license='',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'controller_node = cart_controller.controller_node:main'
        ],
    },
)
