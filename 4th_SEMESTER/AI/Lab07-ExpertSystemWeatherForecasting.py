"""
Lab 07 - Program to implement an Expert System for Weather Forecasting

A simple rule-based (forward-chaining) expert system. It gathers
facts (weather parameters), then applies a knowledge base of
IF-THEN rules to derive conclusions about the expected weather.
"""


class WeatherExpertSystem:
    def __init__(self):
        self.facts = {}
        self.conclusions = []

    def add_fact(self, key, value):
        self.facts[key] = value

    def infer(self):
        """Forward-chaining inference engine: apply each rule in the
        knowledge base; if its condition matches the known facts,
        assert its conclusion."""
        self.conclusions = []
        temp = self.facts.get("temperature")
        humidity = self.facts.get("humidity")
        wind_speed = self.facts.get("wind_speed")
        sky = self.facts.get("sky_condition")
        pressure = self.facts.get("pressure")

        rules_fired = []

        # Rule 1
        if sky == "clear" and humidity is not None and humidity < 40:
            self.conclusions.append("Expect a sunny day.")
            rules_fired.append("R1: clear sky & low humidity -> sunny")

        # Rule 2
        if sky == "cloudy" and humidity is not None and humidity >= 70:
            self.conclusions.append("High chance of rain.")
            rules_fired.append("R2: cloudy & high humidity -> rain likely")

        # Rule 3
        if pressure is not None and pressure < 1000 and wind_speed is not None and wind_speed > 40:
            self.conclusions.append("Storm warning: possible severe weather.")
            rules_fired.append("R3: low pressure & high wind -> storm warning")

        # Rule 4
        if temp is not None and temp > 35:
            self.conclusions.append("Heatwave alert: stay hydrated.")
            rules_fired.append("R4: temperature > 35C -> heatwave alert")

        # Rule 5
        if temp is not None and temp < 5:
            self.conclusions.append("Cold wave alert: risk of frost.")
            rules_fired.append("R5: temperature < 5C -> cold wave alert")

        # Rule 6
        if humidity is not None and 40 <= humidity < 70 and sky == "partly cloudy":
            self.conclusions.append("Pleasant weather expected.")
            rules_fired.append("R6: moderate humidity & partly cloudy -> pleasant")

        # Rule 7
        if wind_speed is not None and wind_speed > 60:
            self.conclusions.append("High wind advisory issued.")
            rules_fired.append("R7: wind speed > 60 km/h -> wind advisory")

        # Default rule if nothing matched
        if not self.conclusions:
            self.conclusions.append(
                "No strong conclusions - weather appears stable/normal.")
            rules_fired.append("Default rule fired")

        return rules_fired

    def report(self):
        print("Known Facts:")
        for k, v in self.facts.items():
            print(f"   {k}: {v}")

        rules_fired = self.infer()

        print("\nRules Fired:")
        for r in rules_fired:
            print(f"   - {r}")

        print("\nForecast / Conclusions:")
        for c in self.conclusions:
            print(f"   -> {c}")


if __name__ == "__main__":
    es = WeatherExpertSystem()

    # Example input facts (could also be taken via input() interactively)
    es.add_fact("temperature", 38)       # in Celsius
    es.add_fact("humidity", 30)          # in percentage
    es.add_fact("wind_speed", 20)        # in km/h
    es.add_fact("sky_condition", "clear")  # clear / cloudy / partly cloudy
    es.add_fact("pressure", 1005)        # in hPa

    es.report()

    print("\n" + "=" * 60)
    print("Second scenario: stormy conditions")
    print("=" * 60)

    es2 = WeatherExpertSystem()
    es2.add_fact("temperature", 22)
    es2.add_fact("humidity", 85)
    es2.add_fact("wind_speed", 65)
    es2.add_fact("sky_condition", "cloudy")
    es2.add_fact("pressure", 985)
    es2.report()
