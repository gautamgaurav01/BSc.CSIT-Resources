"""
Lab 01 - Program for implementing simple intelligent agents.
Example: Simple Reflex Vacuum-Cleaner Agent

The environment consists of two rooms: 'A' and 'B'.
Each room can be either 'Dirty' or 'Clean'.
The agent perceives its current location and the status of that
location, and acts according to a simple set of condition-action
(if-then) rules -> hence a "Simple Reflex Agent".
"""

import random


class VacuumEnvironment:
    def __init__(self):
        # Randomly initialize the state of each room
        self.status = {
            'A': random.choice(['Clean', 'Dirty']),
            'B': random.choice(['Clean', 'Dirty'])
        }
        # Agent starts in a random location
        self.location = random.choice(['A', 'B'])

    def percept(self):
        """Return the current percept: (location, status of that location)"""
        return self.location, self.status[self.location]

    def do_action(self, action):
        """Perform the action returned by the agent program"""
        if action == 'Suck':
            self.status[self.location] = 'Clean'
        elif action == 'Right':
            self.location = 'B'
        elif action == 'Left':
            self.location = 'A'

    def is_clean(self):
        return all(state == 'Clean' for state in self.status.values())


def simple_reflex_agent_program(percept):
    """
    Simple reflex agent: chooses an action based only on the
    current percept, using condition-action rules.
    """
    location, status = percept
    if status == 'Dirty':
        return 'Suck'
    elif location == 'A':
        return 'Right'
    elif location == 'B':
        return 'Left'


def run_agent(steps=10):
    env = VacuumEnvironment()
    print("Initial environment state:", env.status)
    print("Initial agent location   :", env.location)
    print("-" * 50)

    for step in range(1, steps + 1):
        percept = env.percept()
        action = simple_reflex_agent_program(percept)
        print(f"Step {step}: Percept={percept} -> Action='{action}'")
        env.do_action(action)

        if env.is_clean():
            print("-" * 50)
            print(f"Environment fully cleaned in {step} step(s).")
            print("Final environment state:", env.status)
            return

    print("-" * 50)
    print("Reached max steps. Final environment state:", env.status)


if __name__ == "__main__":
    run_agent(steps=10)
