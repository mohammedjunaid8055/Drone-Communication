class FollowerController:

    def __init__(self):

        self.leader_x = 10.0
        self.leader_y = 5.0
        self.leader_z = -3.0

        self.offset_x = -2.0
        self.offset_y = -2.0
        self.offset_z = 0.0

        self.target_x = self.leader_x + self.offset_x
        self.target_y = self.leader_y + self.offset_y
        self.target_z = self.leader_z + self.offset_z

        print(f"Target Position: ({self.target_x}, {self.target_y}, {self.target_z})")


controller = FollowerController()


