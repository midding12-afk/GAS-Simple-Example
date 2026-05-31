# GAS-Simple-Example — Core Framework Implementation (C++)

A clean, production-ready reference implementation of the **Gameplay Ability System (GAS)** in Unreal Engine 5.7. 

This project was built from scratch to practically master and demonstrate the core architecture of GAS, following the technical implementation guidelines from the comprehensive Habr community guide.

## 🚀 Key Features Implemented
* **Core Setup:** Initialized `AbilitySystemComponent` (ASC) and custom `AttributeSet` entirely in C++.
* **Attribute Management:** Created core attributes (Health, Mana) with proper initialization and replication.
* **Gameplay Abilities (GA):** Implemented basic active abilities, handling input binding and C++ activation logic.
* **Gameplay Effects (GE):** Configured instant, duration-based, and infinite effects for attribute modification.
* **UI Integration:** Synced C++ attribute updates with the User Interface layer (UMG) via event-driven delegation.

## 🛠️ Tech Stack & Concepts
* Unreal Engine 5.7 (C++)
* Gameplay Ability System (GAS)
* Component-Based Architecture
* Event-Driven UI Binding

## 📚 Credits & Acknowledgments
This repository is a hands-on code implementation based on the excellent architectural breakdown and guidelines from this technical article: [Habr - Gameplay Ability System Guide](https://github.com/midding12-afk/GAS-Simple-Example).

## 📄 License
This project is licensed under the MIT License - see the LICENSE file for details.
