#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

class Sheep {
private:
    sf::Texture moveTexture;   // Texture for moving animation
    sf::Texture standTexture;  // Texture for standing animation
    sf::Sprite sprite;         // Sprite to display the sheep
    std::vector<sf::IntRect> moveFrames; // Frames for move animation
    std::vector<sf::IntRect> standFrames; // Frames for stand animation
    sf::Clock animationClock;  // Clock for animation timing
    size_t currentFrame;       // Current frame in the animation
    float frameDuration;       // Duration per frame in seconds
    std::string state;         // "move" or "stand"

public:
    Sheep(const std::string& moveFilePath, const std::string& standFilePath, float frameTime)
        : currentFrame(0), frameDuration(frameTime), state("stand") {
        // Load move texture
        if (!moveTexture.loadFromFile(moveFilePath)) {
            std::cerr << "Failed to load move texture from " << moveFilePath << std::endl;
            exit(EXIT_FAILURE);
        }

        // Load stand texture
        if (!standTexture.loadFromFile(standFilePath)) {
            std::cerr << "Failed to load stand texture from " << standFilePath << std::endl;
            exit(EXIT_FAILURE);
        }

        // Set initial sprite texture
        sprite.setTexture(standTexture);

        // Define frames for move animation
        int moveFrameWidth = moveTexture.getSize().x / 4; // Assuming 4 frames in move sprite
        int moveFrameHeight = moveTexture.getSize().y;
        for (int i = 0; i < 4; ++i) {
            moveFrames.emplace_back(i * moveFrameWidth, 0, moveFrameWidth, moveFrameHeight);
        }

        // Define frames for stand animation
        int standFrameWidth = standTexture.getSize().x / 3; // Assuming 3 frames in stand sprite
        int standFrameHeight = standTexture.getSize().y;
        for (int i = 0; i < 3; ++i) {
            standFrames.emplace_back(i * standFrameWidth, 0, standFrameWidth, standFrameHeight);
        }

        // Set initial frame
        sprite.setTextureRect(standFrames[currentFrame]);
    }

    ~Sheep() {
        // Destructor, nothing to clean explicitly as SFML handles resources
    }

    void setState(const std::string& newState) {
        if (state != newState) {
            state = newState;
            currentFrame = 0; // Reset animation to the first frame
            if (state == "move") {
                sprite.setTexture(moveTexture);
            } else if (state == "stand") {
                sprite.setTexture(standTexture);
            }
        }
    }

    void update() {
        // Update animation frame based on the clock
        if (animationClock.getElapsedTime().asSeconds() >= frameDuration) {
            animationClock.restart();
            currentFrame++;

            const auto& frames = (state == "move") ? moveFrames : standFrames;
            if (currentFrame >= frames.size()) {
                currentFrame = 0; // Loop back to the first frame
            }

            sprite.setTextureRect(frames[currentFrame]);
        }
    }

    void move(float dx, float dy) {
        sprite.move(dx, dy); // Move the sprite by dx, dy
    }

    void draw(sf::RenderWindow& window) {
        window.draw(sprite);
    }
};