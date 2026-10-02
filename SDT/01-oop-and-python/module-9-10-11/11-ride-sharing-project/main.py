from ride import Ride, RideRequest, RideMatching, RideSharing
from users import Rider, Driver
from vehicle import Car, Bike

jaben_naki = RideSharing("Jaben Naki")

rahim_the_rider = Rider(
    "Rahim Uddin", "rahim_the_rider@gmail.com", 1234, "Mohakhali", 1200
)

jaben_naki.add_rider(rahim_the_rider)

kolimuddin_the_drive = Driver("Kolim Uddin", "kolim@gmail.com", 1256, "Gulshan")

jaben_naki.add_driver(kolimuddin_the_drive)

rahim_the_rider.request_ride(jaben_naki, "Uttara", "car")

kolimuddin_the_drive.reach_destination(rahim_the_rider.current_ride)

rahim_the_rider.show_current_ride()
