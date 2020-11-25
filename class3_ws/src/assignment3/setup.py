from setuptools import setup

package_name = 'assignment3'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Lauren Courtney',
    maintainer_email='lcourtn5@jhu.edu',
    description='Subscribes to cmd_vel and publishes wheel velocities',
    license='Unknown Liscense',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'mecanum_sim = assignment3.mecanum_sim:main'
        ],
    },
)
